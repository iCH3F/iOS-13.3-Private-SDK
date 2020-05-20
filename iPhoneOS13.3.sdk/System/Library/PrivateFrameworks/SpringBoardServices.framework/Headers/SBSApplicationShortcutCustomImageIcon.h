//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardServices/SBSApplicationShortcutIcon.h>

@class NSData;

@interface SBSApplicationShortcutCustomImageIcon : SBSApplicationShortcutIcon
{
    BOOL _isTemplate;
    NSData *_imageData;
    long long _dataType;
}

@property(readonly, nonatomic) BOOL isTemplate; // @synthesize isTemplate=_isTemplate;
@property(readonly, nonatomic) long long dataType; // @synthesize dataType=_dataType;
@property(readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSData *imagePNGData;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)_initForSubclass;
- (id)initWithImagePNGData:(id)arg1;
- (id)initWithImageData:(id)arg1 dataType:(long long)arg2;
- (id)initWithImageData:(id)arg1 dataType:(long long)arg2 isTemplate:(BOOL)arg3;

@end

