//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSWPShapeInfo.h>

__attribute__((visibility("hidden")))
@interface KNPlaceholderInfo : TSWPShapeInfo
{
}

+ (Class)classForUnarchiver:(id)arg1;
- (BOOL)isEmpty;
- (BOOL)shouldHideEmptyBullets;
- (BOOL)autoListTermination;
- (BOOL)autoListRecognition;
- (id)instructionalText;
- (BOOL)displaysInstructionalText;
- (BOOL)isAllowedInGroups;
- (Class)layoutClass;
- (Class)repClass;
- (id)copyAsShapeInfoWithContext:(id)arg1;
- (int)kind;
- (void)saveToArchive:(struct PlaceholderArchive )arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct PlaceholderArchive )arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;

@end

