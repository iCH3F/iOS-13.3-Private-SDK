//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsFoundation/CNObservable.h>

@class NSArray, NSMutableArray, NSMutableIndexSet;
@protocol CNScheduler;

@interface _CNCombineLatestObservable : CNObservable
{
    NSArray *_observables;
    NSMutableArray *_results;
    NSMutableArray *_tokens;
    NSMutableIndexSet *_activeObservableIndexes;
    NSMutableIndexSet *_silentObservableIndexes;
    id <CNScheduler> _resultScheduler;
}

@property(readonly, nonatomic) id <CNScheduler> resultScheduler; // @synthesize resultScheduler=_resultScheduler;
@property(readonly, nonatomic) NSMutableIndexSet *silentObservableIndexes; // @synthesize silentObservableIndexes=_silentObservableIndexes;
@property(readonly, nonatomic) NSMutableIndexSet *activeObservableIndexes; // @synthesize activeObservableIndexes=_activeObservableIndexes;
@property(readonly, nonatomic) NSMutableArray *tokens; // @synthesize tokens=_tokens;
@property(readonly, nonatomic) NSMutableArray *results; // @synthesize results=_results;
@property(readonly, nonatomic) NSArray *observables; // @synthesize observables=_observables;
// - (void).cxx_destruct;
- (void)observableAtIndex:(NSUInteger)arg1 didFailWithError:(id)arg2 forObserver:(id)arg3;
- (void)observableAtIndexDidComplete:(NSUInteger)arg1 forObserver:(id)arg2;
- (void)observableAtIndex:(NSUInteger)arg1 didReceiveResult:(id)arg2 forObserver:(id)arg3;
- (id)subscribe:(id)arg1;
- (void)performWithResourceLock:(id /* CDUnknownBlockType */)arg1;
- (id)initWithObservables:(id)arg1 resultScheduler:(id)arg2 schedulerProvider:(id)arg3;
- (id)initWithObservables:(id)arg1;

@end

