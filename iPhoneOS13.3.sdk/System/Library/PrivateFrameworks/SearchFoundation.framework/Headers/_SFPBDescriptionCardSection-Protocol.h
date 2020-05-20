//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSData, NSDictionary, NSString, _SFPBColor, _SFPBImage, _SFPBPunchout, _SFPBRichText, _SFPBText, _SFPBURL;

@protocol _SFPBDescriptionCardSection <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSArray *richDescriptions;
@property(retain, nonatomic) _SFPBImage *attributionGlyph;
@property(retain, nonatomic) _SFPBURL *attributionURL;
@property(copy, nonatomic) NSString *attributionText;
@property(nonatomic) int textAlign;
@property(nonatomic) int imageAlign;
@property(nonatomic) BOOL descriptionExpand;
@property(nonatomic) int descriptionWeight;
@property(nonatomic) int descriptionSize;
@property(nonatomic) int titleWeight;
@property(nonatomic) BOOL titleNoWrap;
@property(retain, nonatomic) _SFPBImage *image;
@property(copy, nonatomic) NSString *expandText;
@property(retain, nonatomic) _SFPBText *descriptionText;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) _SFPBColor *backgroundColor;
@property(nonatomic) int separatorStyle;
@property(copy, nonatomic) NSString *type;
@property(nonatomic) BOOL hasBottomPadding;
@property(nonatomic) BOOL hasTopPadding;
@property(nonatomic) BOOL canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBRichText *)richDescriptionsAtIndex:(NSUInteger)arg1;
- (NSUInteger)richDescriptionsCount;
- (void)addRichDescriptions:(_SFPBRichText *)arg1;
- (void)clearRichDescriptions;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(NSUInteger)arg1;
- (NSUInteger)punchoutOptionsCount;
- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (void)clearPunchoutOptions;
@end
