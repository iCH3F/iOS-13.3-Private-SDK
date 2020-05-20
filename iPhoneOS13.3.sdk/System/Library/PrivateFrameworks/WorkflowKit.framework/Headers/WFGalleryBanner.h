//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFCloudKitItem-Protocol.h>

@class CKRecordID, NSString, WFFileRepresentation;

@interface WFGalleryBanner : NSObject <WFCloudKitItem, NSMutableCopying>
{
    CKRecordID *_identifier;
    NSString *_name;
    CKRecordID *_detailPage;
    WFFileRepresentation *_iphone2xImageFile;
    WFFileRepresentation *_iphone3xImageFile;
    WFFileRepresentation *_ipad2xImageFile;
    NSString *_language;
    CKRecordID *_base;
    NSString *_persistentIdentifier;
}

+ (CGSize)pixelSizeForBannerSize:(long long)arg1;
+ (CGSize)pointSizeForBannerSize:(long long)arg1;
+ (double)scaleForBannerSize:(long long)arg1;
+ (id)propertyForSize:(long long)arg1;
+ (id)properties;
+ (id)recordType;
@property(readonly, nonatomic) NSString *persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
@property(readonly, nonatomic) CKRecordID *base; // @synthesize base=_base;
@property(readonly, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) WFFileRepresentation *ipad2xImageFile; // @synthesize ipad2xImageFile=_ipad2xImageFile;
@property(retain, nonatomic) WFFileRepresentation *iphone3xImageFile; // @synthesize iphone3xImageFile=_iphone3xImageFile;
@property(retain, nonatomic) WFFileRepresentation *iphone2xImageFile; // @synthesize iphone2xImageFile=_iphone2xImageFile;
@property(readonly, nonatomic) CKRecordID *detailPage; // @synthesize detailPage=_detailPage;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) CKRecordID *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)imageForSize:(long long)arg1;
- (id)imageFileForSize:(long long)arg1;
- (NSUInteger)referenceActionForKey:(id)arg1;

@end
