//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSString;

@protocol PLPhotoAnalysisJobServiceProtocol
- (void)reportTurboEnabledWithContext:(NSDictionary *)arg1 reply:(void (^)(NSNumber *, NSError *))arg2;
- (void)setJobProcessingConstraintsWithValues:(NSString *)arg1 mask:(NSString *)arg2 context:(NSDictionary *)arg3 reply:(void (^)(NSString *, NSError *))arg4;
- (void)scheduleAssetForOnDemandAnalysisWithUUID:(NSString *)arg1 workerType:(short)arg2 workerFlags:(int)arg3 context:(NSDictionary *)arg4 reply:(void (^)(NSError *))arg5;
@end

