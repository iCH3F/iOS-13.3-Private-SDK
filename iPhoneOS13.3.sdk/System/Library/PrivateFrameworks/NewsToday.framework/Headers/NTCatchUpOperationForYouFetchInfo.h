//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary;

@interface NTCatchUpOperationForYouFetchInfo : NSObject <NSCopying>
{
    BOOL _attemptedCachedOnly;
    NSDictionary *_feedContextByFeedID;
    NSObject *_fetchedRecordsInterestToken;
}

@property(readonly, copy, nonatomic) NSObject *fetchedRecordsInterestToken; // @synthesize fetchedRecordsInterestToken=_fetchedRecordsInterestToken;
@property(readonly, copy, nonatomic) NSDictionary *feedContextByFeedID; // @synthesize feedContextByFeedID=_feedContextByFeedID;
@property(readonly, nonatomic) BOOL attemptedCachedOnly; // @synthesize attemptedCachedOnly=_attemptedCachedOnly;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithAttemptedCachedOnly:(BOOL)arg1 feedContextByFeedID:(id)arg2 fetchedRecordsInterestToken:(id)arg3;
- (id)init;

@end

