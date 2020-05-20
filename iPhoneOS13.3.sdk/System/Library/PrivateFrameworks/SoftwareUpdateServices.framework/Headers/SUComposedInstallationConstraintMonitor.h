//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoftwareUpdateServices/SUInstallationConstraintMonitor-Protocol.h>
#import <SoftwareUpdateServices/SUInstallationConstraintMonitorDelegate-Protocol.h>

@class NSSet;
@protocol OS_dispatch_queue, SUInstallationConstraintMonitorDelegate;

@interface SUComposedInstallationConstraintMonitor : NSObject <SUInstallationConstraintMonitorDelegate, SUInstallationConstraintMonitor>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSSet *_queue_installationConstraintMonitors;
    id <SUInstallationConstraintMonitorDelegate> _queue_delegate;
    NSUInteger _queue_representedConstraints;
}

@property(readonly, retain, nonatomic) NSSet *constraintMonitors; // @synthesize constraintMonitors=_queue_installationConstraintMonitors;
// - (void).cxx_destruct;
- (void)_queue_setDelegate:(id)arg1;
- (void)installationConstraintMonitor:(id)arg1 constraintsDidChange:(NSUInteger)arg2;
- (void)_queue_invalidateChildConstraintMonitors;
- (NSUInteger)_queue_unsatisfiedConstraints;
- (NSUInteger)_queue_representedConstraints;
- (void)_queue_clearDelegate;
- (id)_queue_delegate;
- (void)_queue_noteInstallationConstraintMonitor:(id)arg1 constraintsDidChange:(NSUInteger)arg2;
- (BOOL)isSatisfied;
@property(readonly, nonatomic) NSUInteger unsatisfiedConstraints;
@property(readonly, nonatomic) NSUInteger representedConstraints;
@property(nonatomic) id <SUInstallationConstraintMonitorDelegate> delegate;
- (void)dealloc;
- (id)initWithInternalQueue:(id)arg1 withInstallationConstraintMonitors:(id)arg2;

@end

