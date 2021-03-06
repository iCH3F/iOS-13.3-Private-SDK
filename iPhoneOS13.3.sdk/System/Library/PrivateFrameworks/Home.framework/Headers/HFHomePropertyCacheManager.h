//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFAccessoryObserver-Protocol.h>
#import <Home/HFHomeManagerObserver-Protocol.h>
#import <Home/HFHomeObserver-Protocol.h>

@class NSMutableDictionary;

@interface HFHomePropertyCacheManager : NSObject <HFHomeObserver, HFHomeManagerObserver, HFAccessoryObserver>
{
    NSMutableDictionary *_objectCaches;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableDictionary *objectCaches; // @synthesize objectCaches=_objectCaches;
// - (void).cxx_destruct;
- (void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;
- (void)home:(id)arg1 didAddAccessory:(id)arg2;
- (void)accessoryDidUpdateServices:(id)arg1;
- (id)valueForObject:(id)arg1 key:(id)arg2 invalidationReasons:(NSUInteger)arg3 recalculationBlock:(id /* CDUnknownBlockType */)arg4;
- (void)_clearCachedValues;
- (id)init;

@end

