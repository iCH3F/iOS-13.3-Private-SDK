//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVTEditingModelColors, AVTUILogger, NSData, NSError;

@interface AVTEditingModelDefinitionsParser : NSObject
{
    AVTUILogger *_logger;
    NSData *_plistData;
    NSError *_error;
    AVTEditingModelColors *_colorCache;
}

+ (id)dataFromBundle;
+ (id)dataFromAvatarKit;
+ (id)errorWithDescription:(id)arg1 underlyingError:(id)arg2;
@property(retain, nonatomic) AVTEditingModelColors *colorCache; // @synthesize colorCache=_colorCache;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSData *plistData; // @synthesize plistData=_plistData;
@property(readonly, nonatomic) AVTUILogger *logger; // @synthesize logger=_logger;
// - (void).cxx_destruct;
- (id)coreModelRowOptionsFromOptionsDictionary:(id)arg1;
- (id)coreModelRowFromRowDictionary:(id)arg1 availableTags:(NSDictionary )arg2 usedTags:(id)arg3;
- (NSDictionary )gatherAllTagsFromPresets:(id)arg1;
- (id)coreModelColorsForColorDefinitions:(id)arg1 paletteSettingKind:(CDStruct_597dd055)arg2;
- (id)coreModelColorsForPaletteSettingKind:(CDStruct_597dd055)arg1;
- (id)coreModelPresetsForCategory:(long long)arg1;
- (BOOL)validateForColorPicker:(id)arg1 colorPaletteCategory:(id)arg2 error:(id )arg3;
- (BOOL)validateForCategoryWithEnumValue:(id)arg1 presetPickers:(id)arg2 colorPickers:(id)arg3;
- (id)coreModelColorPaletteForColorPickerDictionary:(id)arg1 settingDestination:(long long)arg2 inCategory:(long long)arg3;
- (id)coreModelCategoryFromCategoryDictionary:(id)arg1;
- (id)coreModelGroupFromGroupDictionary:(id)arg1;
- (id)parseCoreModelFromDefinitions:(id)arg1;
- (id)decodePropertyListObjects:(id)arg1;
- (void)parseWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (id)initWithPlistData:(id)arg1 logger:(id)arg2;
- (id)initWithLogger:(id)arg1;

@end

