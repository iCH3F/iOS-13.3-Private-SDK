//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class WFParameter;

@protocol WFParameterEventObserver <NSObject>

@optional
- (void)parameterStateValidityCriteriaDidChange:(WFParameter *)arg1;
- (void)parameterDefaultSerializedRepresentationDidChange:(WFParameter *)arg1;
- (void)parameterAttributesDidChange:(WFParameter *)arg1;
@end
