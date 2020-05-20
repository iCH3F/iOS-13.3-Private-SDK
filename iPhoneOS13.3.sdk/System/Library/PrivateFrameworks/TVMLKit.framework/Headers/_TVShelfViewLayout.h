//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSArray, _TVShelfLayoutHelper;

@interface _TVShelfViewLayout : UICollectionViewLayout
{
    BOOL _shouldSnapContent;
    double _minimumInteritemSpacing;
    double _minimumLineSpacing;
    long long _rowCount;
    long long _prominentSectionIndex;
    double _headerSelectionMargin;
    double _headerBottomMargin;
    _TVShelfLayoutHelper *_layoutHelper;
    NSArray *_shelfLayoutSections;
    CGSize _itemSize;
    CGSize _headerReferenceSize;
    UIEdgeInsets _sectionInset;
}

+ (double)defaultHeaderSelectionMargin;
@property(retain, nonatomic) NSArray *shelfLayoutSections; // @synthesize shelfLayoutSections=_shelfLayoutSections;
@property(retain, nonatomic) _TVShelfLayoutHelper *layoutHelper; // @synthesize layoutHelper=_layoutHelper;
@property(nonatomic) UIEdgeInsets sectionInset; // @synthesize sectionInset=_sectionInset;
@property(nonatomic) double headerBottomMargin; // @synthesize headerBottomMargin=_headerBottomMargin;
@property(nonatomic) double headerSelectionMargin; // @synthesize headerSelectionMargin=_headerSelectionMargin;
@property(nonatomic) CGSize headerReferenceSize; // @synthesize headerReferenceSize=_headerReferenceSize;
@property(nonatomic) long long prominentSectionIndex; // @synthesize prominentSectionIndex=_prominentSectionIndex;
@property(nonatomic) long long rowCount; // @synthesize rowCount=_rowCount;
@property(nonatomic) CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) double minimumLineSpacing; // @synthesize minimumLineSpacing=_minimumLineSpacing;
@property(nonatomic) double minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_minimumInteritemSpacing;
@property(nonatomic) BOOL shouldSnapContent; // @synthesize shouldSnapContent=_shouldSnapContent;
// - (void).cxx_destruct;
- (id)indexPathForSnappedContent;
- (void)snapContentToIndexPath:(id)arg1;
- (void)snapContent;
- (id)_indexPathForItemAtProposedContentOffset:(CGPoint)arg1;
- (CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2;
- (CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1;
- (BOOL)_bumpHeaderForLayoutSection:(id)arg1 forIndexPath:(id)arg2;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1;
- (CGRect)boundingSelectionFrameForFrame:(CGRect)arg1;
- (double)computedContentHeight;
- (long long)computedRowCount;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (CGSize)collectionViewContentSize;
- (void)prepareLayout;
- (id)init;

@end
