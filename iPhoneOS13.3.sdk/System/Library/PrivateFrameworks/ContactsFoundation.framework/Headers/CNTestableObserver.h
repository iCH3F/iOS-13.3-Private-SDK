//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNObserver-Protocol.h>

@class CNObservableContractEnforcement, CNVirtualScheduler, NSArray, NSMutableArray;

@interface CNTestableObserver : NSObject <CNObserver>
{
    CNVirtualScheduler *_scheduler;
    NSMutableArray *_results;
    CNObservableContractEnforcement *_enforcement;
}

+ (id)observerWithScheduler:(id)arg1;
@property(readonly) NSArray *results; // @synthesize results=_results;
// - (void).cxx_destruct;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidComplete;
- (void)observerDidReceiveResult:(id)arg1;
@property(readonly) NSArray *resultValues;
- (id)initWithScheduler:(id)arg1;

@end

