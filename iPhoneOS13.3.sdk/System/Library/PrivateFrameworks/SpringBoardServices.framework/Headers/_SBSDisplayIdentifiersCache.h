//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol OS_dispatch_queue;

@interface _SBSDisplayIdentifiersCache : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSSet *_displayIdentifiers;
    int _changedToken;
    id /* CDUnknownBlockType */ _changedBlock;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)_queue_noteChanged;
- (void)registerChangedBlock:(id /* CDUnknownBlockType */)arg1;
- (id)displayIdentifiers;
- (void)dealloc;
- (id)init;

@end
