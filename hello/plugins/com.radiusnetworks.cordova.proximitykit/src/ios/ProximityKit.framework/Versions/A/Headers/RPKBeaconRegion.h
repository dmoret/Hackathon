//  Copyright (c) 2013 Radius Networks. All rights reserved.

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import "RPKRegion.h"

/*!
 * @interface PKIBeaconRegion
 */
@interface RPKBeaconRegion : RPKRegion

@property (readonly) NSUUID *uuid;
@property (readonly) NSInteger major;
@property (readonly) NSInteger minor;
@property (readonly) BOOL hasMajor;
@property (readonly) BOOL hasMinor;

- (id)initWith:(NSDictionary *)dict;
- (id)initWithRegion:(CLBeaconRegion *)region dict:(NSDictionary *)dict;
- (CLBeaconRegion *)region;

@end