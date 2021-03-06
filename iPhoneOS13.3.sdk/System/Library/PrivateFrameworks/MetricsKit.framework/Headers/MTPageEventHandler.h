//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricsKit/MTStandardEventHandler.h>

@class NSMutableArray;

@interface MTPageEventHandler : MTStandardEventHandler
{
    NSMutableArray *_trackedPageHistory;
}

@property(retain, nonatomic) NSMutableArray *trackedPageHistory; // @synthesize trackedPageHistory=_trackedPageHistory;
// - (void).cxx_destruct;
- (id)metricsDataWithCallerSuppliedFields:(id)arg1;
- (void)updatePageHistoryWithPage:(id)arg1;
- (id)pageHistory:(id)arg1;
- (id)eventVersion:(id)arg1;
- (id)eventType;
- (id)knownFields;

@end

