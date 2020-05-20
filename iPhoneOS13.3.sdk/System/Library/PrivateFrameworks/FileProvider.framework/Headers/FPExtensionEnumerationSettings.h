//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPEnumerationSettings.h>

@class FPItemID;

@interface FPExtensionEnumerationSettings : FPEnumerationSettings
{
    BOOL _presenterEnumeration;
    BOOL _wantsDirectExtensionEnumeration;
    BOOL _wantsTrashEnumeration;
    FPItemID *_enumeratedItemID;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL wantsTrashEnumeration; // @synthesize wantsTrashEnumeration=_wantsTrashEnumeration;
@property(nonatomic) BOOL wantsDirectExtensionEnumeration; // @synthesize wantsDirectExtensionEnumeration=_wantsDirectExtensionEnumeration;
@property(nonatomic, getter=isPresenterEnumeration) BOOL presenterEnumeration; // @synthesize presenterEnumeration=_presenterEnumeration;
@property(copy, nonatomic) FPItemID *enumeratedItemID; // @synthesize enumeratedItemID=_enumeratedItemID;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;

@end

