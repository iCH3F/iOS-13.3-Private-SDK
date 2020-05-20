//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDate, NSNumber, NSString, PLLocalCreationDateCreator;

@protocol PLAssetDateDescriptor <NSObject>
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property(readonly, nonatomic) NSNumber *rawTimeZoneOffsetValue;
@property(readonly, nonatomic) NSString *rawTimeZoneName;
@property(readonly, nonatomic) NSDate *utcDate;
@property(readonly, nonatomic) NSString *uuid;
- (NSDate *)localDateAndCreateIfNeededWithLocalDateCreator:(PLLocalCreationDateCreator *)arg1;
@end

