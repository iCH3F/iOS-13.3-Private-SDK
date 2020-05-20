//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SXComponentSizer, SXLayoutOptions;
@protocol SXComponent, SXComponentLayout, SXComponentSizerFactory, SXDOMObjectProviding;

@protocol SXComponentSizerEngine <NSObject>
- (void)removeFactory:(id <SXComponentSizerFactory>)arg1;
- (void)addFactory:(id <SXComponentSizerFactory>)arg1;
- (SXComponentSizer *)sizerForComponent:(id <SXComponent>)arg1 componentLayout:(id <SXComponentLayout>)arg2 layoutOptions:(SXLayoutOptions *)arg3 DOMObjectProvider:(id <SXDOMObjectProviding>)arg4;
@end

