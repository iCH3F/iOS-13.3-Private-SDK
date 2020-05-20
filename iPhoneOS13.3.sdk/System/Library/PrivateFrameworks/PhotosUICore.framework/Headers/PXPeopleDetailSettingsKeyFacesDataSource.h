//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPeopleDetailSettingsDataSource-Protocol.h>

@class NSArray, NSString;

@interface PXPeopleDetailSettingsKeyFacesDataSource : NSObject <PXPeopleDetailSettingsDataSource>
{
    NSString *_title;
    NSArray *_keyFaces;
}

@property(retain, nonatomic) NSArray *keyFaces; // @synthesize keyFaces=_keyFaces;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
- (id)modelObjectForIndex:(long long)arg1;
@property(readonly, nonatomic) long long action;
- (long long)verifyTypeAtIndex:(long long)arg1;
- (NSUInteger)faceCount:(long long)arg1;
- (id)personNameAtIndex:(long long)arg1;
- (void)imageAtIndex:(NSUInteger)arg1 targetSize:(CGSize)arg2 withCompletionBlock:(id /* CDUnknownBlockType */)arg3;
@property(readonly, nonatomic) NSUInteger numberOfItems;
@property(readonly, nonatomic) BOOL hasMoreDetails;
- (id)initWithTitle:(id)arg1 keyFaces:(id)arg2;

@end

