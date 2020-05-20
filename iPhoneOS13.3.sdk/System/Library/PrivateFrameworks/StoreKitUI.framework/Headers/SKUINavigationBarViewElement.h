//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class NSArray, UIColor;

__attribute__((visibility("hidden")))
@interface SKUINavigationBarViewElement : SKUIViewElement
{
    BOOL _hidesShadow;
    BOOL _hidesBackButton;
}

@property(readonly, nonatomic) BOOL hidesBackButton; // @synthesize hidesBackButton=_hidesBackButton;
@property(readonly, nonatomic) BOOL hidesShadow; // @synthesize hidesShadow=_hidesShadow;
@property(readonly, nonatomic) NSArray *navigationPalettes;
@property(readonly, nonatomic) NSArray *mainViewElements;
- (id)applyUpdatesWithElement:(id)arg1;
@property(readonly, nonatomic) UIColor *tintColor;
@property(readonly, nonatomic) BOOL isTransparent;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end
