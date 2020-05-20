//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class OADFill;

__attribute__((visibility("hidden")))
@interface CMImageFillMapper : CMMapper
{
    OADFill *mFill;
    CGRect mBounds;
}

// - (void).cxx_destruct;
- (BOOL)isCropped;
- (CGRect)uncroppedBox;
- (void)mapNonImageFillAt:(id)arg1 toStyle:(id)arg2 withState:(id)arg3;
- (void)mapImageFillAt:(id)arg1 toStyle:(id)arg2 withState:(id)arg3;
- (id)mapImageFill:(id)arg1 withState:(id)arg2;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)initWithOadFill:(id)arg1 bounds:(CGRect)arg2 parent:(id)arg3;
- (id)convertMetafileToPdf:(id)arg1 state:(id)arg2;
- (id)blipAtIndex:(unsigned int)arg1;
- (id)mainSubBlip;

@end

