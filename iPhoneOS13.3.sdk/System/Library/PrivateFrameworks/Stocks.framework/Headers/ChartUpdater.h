//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Stocks/YQLRequest.h>

@class Stock, StockChartData;
@protocol ChartUpdaterDelegate;

@interface ChartUpdater : YQLRequest
{
    Stock *_stock;
    StockChartData *_currentChartData;
    id /* CDUnknownBlockType */ _updateCompletionHandler;
    id <ChartUpdaterDelegate> _delegate;
    long long _interval;
}

+ (id)_rangeStringForInterval:(long long)arg1;
@property(readonly) long long interval; // @synthesize interval=_interval;
@property(nonatomic) __weak id <ChartUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)dataSeries;
- (id)aggregateDictionaryDomain;
- (void)failWithError:(id)arg1;
- (void)didParseData;
- (void)parseDataSeriesDictionary:(id)arg1;
- (void)parseDataSeriesDictionary:(id)arg1 interval:(long long)arg2;
- (void)parseData:(id)arg1;
- (BOOL)updateChartForStock:(id)arg1 interval:(long long)arg2 withCompletion:(id /* CDUnknownBlockType */)arg3;
- (BOOL)updateChartForStock:(id)arg1 interval:(long long)arg2;
- (void)cancel;

@end

