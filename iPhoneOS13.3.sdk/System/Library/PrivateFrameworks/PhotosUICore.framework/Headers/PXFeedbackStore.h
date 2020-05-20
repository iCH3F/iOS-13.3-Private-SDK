//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface PXFeedbackStore : NSObject
{
    NSMutableDictionary *_store;
}

@property(readonly, nonatomic) NSDictionary *store; // @synthesize store=_store;
// - (void).cxx_destruct;
- (id)longDescription;
- (BOOL)_loadStore;
- (BOOL)_saveStore;
- (void)_cleanupStore;
- (id)_storePath;
- (NSUInteger)unsentFeedbackCount;
- (NSUInteger)sentFeedbackCount;
- (void)removeFeedbackEntry:(id)arg1;
- (void)addFeedbackEntry:(id)arg1;
- (id)init;

@end

