//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIShelfMenuBarViewElement.h>

#import <StoreKitUI/SKUIDynamicShelfViewElement-Protocol.h>

@class SKUIViewElement;

__attribute__((visibility("hidden")))
@interface SKUIDynamicShelfMenuBarViewElement : SKUIShelfMenuBarViewElement <SKUIDynamicShelfViewElement>
{
    SKUIViewElement *_cellTemplateViewElement;
}

// - (void).cxx_destruct;
- (void)setShelfItemViewElementValidator:(id /* CDUnknownBlockType */)arg1;
- (BOOL)isDynamicContainer;
- (id)applyUpdatesWithElement:(id)arg1;
@property(readonly, nonatomic) SKUIViewElement *cellTemplateViewElement;

@end

