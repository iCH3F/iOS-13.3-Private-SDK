//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PXTilingControllerDebugInfo : NSObject
{
    NSArray *_preheatRects;
    NSArray *_pagedItems;
    NSArray *_preheatedItems;
    NSArray *_activeItems;
    CGRect _visibleRect;
    CGRect _activeRect;
    CGRect _pagedRect;
    CGRect _cachedRect;
    CGRect _contentBounds;
}

@property(retain, nonatomic) NSArray *activeItems; // @synthesize activeItems=_activeItems;
@property(retain, nonatomic) NSArray *preheatedItems; // @synthesize preheatedItems=_preheatedItems;
@property(retain, nonatomic) NSArray *pagedItems; // @synthesize pagedItems=_pagedItems;
@property(retain, nonatomic) NSArray *preheatRects; // @synthesize preheatRects=_preheatRects;
@property(nonatomic) CGRect contentBounds; // @synthesize contentBounds=_contentBounds;
@property(nonatomic) CGRect cachedRect; // @synthesize cachedRect=_cachedRect;
@property(nonatomic) CGRect pagedRect; // @synthesize pagedRect=_pagedRect;
@property(nonatomic) CGRect activeRect; // @synthesize activeRect=_activeRect;
@property(nonatomic) CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
// - (void).cxx_destruct;
- (id)debugQuickLookObject;
- (void)drawInRect:(CGRect)arg1 inContext:(CGContext )arg2;

@end

