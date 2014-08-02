//
//  AGSGoogleMapLayer.h
//  TestGoogleMap
//
//  Created by iphone4 on 10-12-16.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ArcGIS/ArcGIS.h>

@interface AGSGoogleMapLayer : AGSTiledLayer 
{
	AGSTileInfo* _tileInfo;
	AGSEnvelope* _fullEnvelope;	
	AGSUnits _units;
    NSString* _dataFramePath;
    NSString *_TDPath;
    AGSEnvelope *envelope;
}
@property (nonatomic,strong,readwrite) NSString* dataFramePath;
@property (nonatomic,strong,readwrite) NSString* tdPath;
@property (nonatomic,strong,readwrite) AGSEnvelope *envelope;
-(id)initWithGoogleMapSchema: (NSString *)path tdPath:(NSString *)tdPath envelope:(AGSEnvelope *)envelope;
@end
