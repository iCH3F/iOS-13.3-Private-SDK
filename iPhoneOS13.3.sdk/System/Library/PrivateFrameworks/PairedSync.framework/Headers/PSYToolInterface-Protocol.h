//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PSYOptions;

@protocol PSYToolInterface <NSObject>
- (oneway void)cancelSyncSession;
- (oneway void)clearCurrentResumeContext;
- (oneway void)startSyncWithOptions:(PSYOptions *)arg1;
- (oneway void)getOrderedActivityInfosWithCompletion:(void (^)(NSArray *))arg1;
@end

