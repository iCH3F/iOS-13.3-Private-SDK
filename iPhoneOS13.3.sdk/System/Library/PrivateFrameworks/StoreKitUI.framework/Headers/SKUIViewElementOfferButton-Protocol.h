//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SKUIBuyButtonDescriptor, SKUIClientContext, SKUIItemState;
@protocol SKUIItemOfferButtonDelegate;

@protocol SKUIViewElementOfferButton <NSObject>
@property(nonatomic) __weak id <SKUIItemOfferButtonDelegate> itemOfferDelegate;
- (BOOL)setValuesUsingBuyButtonDescriptor:(SKUIBuyButtonDescriptor *)arg1 itemState:(SKUIItemState *)arg2 clientContext:(SKUIClientContext *)arg3 animated:(BOOL)arg4;
@end

