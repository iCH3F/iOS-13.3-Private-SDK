//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CLLocation, NSData;

@protocol MapsSuggestionsSignalPipelineProxy <NSObject>
- (void)signalPackForLocation:(CLLocation *)arg1 handler:(void (^)(NSData *, NSError *))arg2;
- (void)signalPackForDestinationEntryData:(NSData *)arg1 originCoordinateData:(NSData *)arg2 handler:(void (^)(NSData *, NSError *))arg3;
- (void)signalPackForDestinationMapItemData:(NSData *)arg1 originCoordinateData:(NSData *)arg2 handler:(void (^)(NSData *, NSError *))arg3;
@end

