//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PGGraphDataModelEnrichmentManager;
@protocol PGGraphDataModelEnrichmentProcessor;

@protocol PGGraphDataModelEnrichmentManagerDelegate <NSObject>
- (void)enrichmentManager:(PGGraphDataModelEnrichmentManager *)arg1 didCancelProcessor:(id <PGGraphDataModelEnrichmentProcessor>)arg2;
- (void)enrichmentManager:(PGGraphDataModelEnrichmentManager *)arg1 didRunProcessor:(id <PGGraphDataModelEnrichmentProcessor>)arg2;
- (BOOL)enrichmentManager:(PGGraphDataModelEnrichmentManager *)arg1 shouldRunProcessor:(id <PGGraphDataModelEnrichmentProcessor>)arg2;
@end
