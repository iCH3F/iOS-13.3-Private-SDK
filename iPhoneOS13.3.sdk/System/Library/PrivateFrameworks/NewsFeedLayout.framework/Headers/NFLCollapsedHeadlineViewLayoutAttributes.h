//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsFeedLayout/NFLFeedCollectionViewLayoutAttributes.h>

@class NSParagraphStyle, NSString, UIColor, UIFont;

@interface NFLCollapsedHeadlineViewLayoutAttributes : NFLFeedCollectionViewLayoutAttributes
{
    NSParagraphStyle *_titleParagraphStyle;
    long long _titleNumberOfLines;
    UIFont *_titleFont;
    UIFont *_publisherTextFont;
    UIColor *_publisherTextColor;
    long long _publisherTextNumberOfLines;
    NSParagraphStyle *_publisherTextParagraphStyle;
    NSString *_titleFontName;
    double _titleFontSize;
    CGRect _titleFrame;
    CGRect _publisherLogoFrame;
    CGRect _publisherTextFrame;
}

+ (double)publisherTextHeightForLabelSize:(CGSize)arg1 font:(id)arg2;
+ (CGSize)publisherLogoSizeFeedSettings:(id)arg1;
+ (id)layoutAttributesForCellWithIndexPath:(id)arg1 feedSettings:(id)arg2;
@property(nonatomic) double titleFontSize; // @synthesize titleFontSize=_titleFontSize;
@property(retain, nonatomic) NSString *titleFontName; // @synthesize titleFontName=_titleFontName;
@property(readonly, nonatomic) NSParagraphStyle *publisherTextParagraphStyle; // @synthesize publisherTextParagraphStyle=_publisherTextParagraphStyle;
@property(nonatomic) long long publisherTextNumberOfLines; // @synthesize publisherTextNumberOfLines=_publisherTextNumberOfLines;
@property(copy, nonatomic) UIColor *publisherTextColor; // @synthesize publisherTextColor=_publisherTextColor;
@property(retain, nonatomic) UIFont *publisherTextFont; // @synthesize publisherTextFont=_publisherTextFont;
@property(nonatomic) CGRect publisherTextFrame; // @synthesize publisherTextFrame=_publisherTextFrame;
@property(nonatomic) CGRect publisherLogoFrame; // @synthesize publisherLogoFrame=_publisherLogoFrame;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(nonatomic) long long titleNumberOfLines; // @synthesize titleNumberOfLines=_titleNumberOfLines;
@property(readonly, nonatomic) NSParagraphStyle *titleParagraphStyle; // @synthesize titleParagraphStyle=_titleParagraphStyle;
@property(nonatomic) CGRect titleFrame; // @synthesize titleFrame=_titleFrame;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;

@end

