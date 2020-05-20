//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

#import <StoreKitUI/SKUIShelfCollectionViewLayout-Protocol.h>

@class SKUIShelfLayoutData;

__attribute__((visibility("hidden")))
@interface SKUIShelfCollectionViewLayout : UICollectionViewLayout <SKUIShelfCollectionViewLayout>
{
    SKUIShelfLayoutData *_layoutData;
}

+ (Class)layoutAttributesClass;
+ (BOOL)collectionViewCanClipToBounds;
+ (double)snapToBoundariesDecelerationRate;
@property(retain, nonatomic) SKUIShelfLayoutData *layoutData; // @synthesize layoutData=_layoutData;
// - (void).cxx_destruct;
- (BOOL)_shouldScrollToContentBeginningInRightToLeft;
- (CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (CGSize)collectionViewContentSize;

@end

