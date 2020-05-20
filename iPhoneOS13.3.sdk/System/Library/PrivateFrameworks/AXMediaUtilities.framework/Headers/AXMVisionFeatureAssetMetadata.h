//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDate, NSString, NSURL;

@interface AXMVisionFeatureAssetMetadata : NSObject <NSSecureCoding>
{
    NSString *_name;
    NSDate *_creationDate;
    NSString *_uti;
    NSString *_localizedTypeDescription;
    NSString *_TIFFImageDescription;
    NSString *_IPTCCaptionAbstract;
    NSString *_EXIFUserComment;
    NSString *_PNGImageDescription;
    NSURL *_assetURL;
}

+ (id)assetMetadataFromURL:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(retain, nonatomic) NSString *PNGImageDescription; // @synthesize PNGImageDescription=_PNGImageDescription;
@property(retain, nonatomic) NSString *EXIFUserComment; // @synthesize EXIFUserComment=_EXIFUserComment;
@property(retain, nonatomic) NSString *IPTCCaptionAbstract; // @synthesize IPTCCaptionAbstract=_IPTCCaptionAbstract;
@property(retain, nonatomic) NSString *TIFFImageDescription; // @synthesize TIFFImageDescription=_TIFFImageDescription;
@property(retain, nonatomic) NSString *localizedTypeDescription; // @synthesize localizedTypeDescription=_localizedTypeDescription;
@property(retain, nonatomic) NSString *uti; // @synthesize uti=_uti;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *url;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

