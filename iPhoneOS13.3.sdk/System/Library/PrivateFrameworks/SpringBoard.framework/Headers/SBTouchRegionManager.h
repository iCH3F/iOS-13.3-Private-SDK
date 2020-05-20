//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/FBSDisplayLayoutObserver-Protocol.h>
#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>

@class FBSDisplayLayoutMonitor, SBBackBoardServicesInterface, SBMedusa1oSettings;
@protocol OS_dispatch_queue;

@interface SBTouchRegionManager : NSObject <FBSDisplayLayoutObserver, PTSettingsKeyObserver>
{
    NSObject<OS_dispatch_queue> *_queue;
    SBBackBoardServicesInterface *_queue_bksInterface;
    FBSDisplayLayoutMonitor *_queue_displayLayoutMonitor;
    SBMedusa1oSettings *_medusaSettings;
    double _queue_touchRegionBuffer;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;
- (void)_queue_displayLayoutDidUpdate:(id)arg1;
- (id)_queue_floatingHitTestRegionForLayoutRect:(CGRect)arg1;
- (NSMutableSet )_queue_calculateHitTestRegionsFromSceneRects:(NSMutableSet )arg1;
- (NSMutableSet )_queue_calculateTouchRegionsFromSceneRects:(NSMutableSet )arg1;
- (id)displayLayoutMonitor;
- (void)setDisplayLayoutMonitor:(id)arg1;
- (void)setTouchRegionBuffer:(double)arg1;
- (double)touchRegionBuffer;
- (void)dealloc;
- (id)_initWithBKSInterface:(id)arg1 displayLayoutMonitor:(id)arg2;
- (id)init;

@end

