//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKValueDataProvider.h>

@interface HKCumulativeSumCurrentValueDataProvider : HKValueDataProvider
{
}

- (void)_sumFromDate:(id)arg1 toDate:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_dataProviderValueFromMostRecentSample:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)_mostRecentValueQueryWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)fetchOperationWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)currentValue;

@end

