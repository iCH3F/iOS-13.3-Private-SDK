//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKEmergencyCardTableItem.h>

#import <HealthUI/HKMedicalIDEditorCellEditDelegate-Protocol.h>
#import <HealthUI/HKMedicalIDEditorCellHeightChangeDelegate-Protocol.h>

@class HKMedicalIDEditorNameAndPhotoCell;
@protocol HKEmergencyCardRowHeightChangeDelegate;

@interface HKEmergencyCardNameAndPictureTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate, HKMedicalIDEditorCellHeightChangeDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    HKMedicalIDEditorNameAndPhotoCell *_cell;
    id <HKEmergencyCardRowHeightChangeDelegate> _rowHeightChangeDelegate;
}

@property(nonatomic) __weak id <HKEmergencyCardRowHeightChangeDelegate> rowHeightChangeDelegate; // @synthesize rowHeightChangeDelegate=_rowHeightChangeDelegate;
// - (void).cxx_destruct;
- (NSUInteger)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)_editPhotoTapped:(id)arg1;
- (void)medicalIDEditorCellDidChangeValue:(id)arg1;
- (void)setData:(id)arg1;
- (void)commitEditing;
- (void)medicalIDEditorCellDidChangeSelection:(id)arg1 keepRectVisible:(CGRect)arg2 inView:(id)arg3;
- (void)medicalIDEditorCellDidBeginEditing:(id)arg1 keepRectVisible:(CGRect)arg2 inView:(id)arg3;
- (void)medicalIDEditorCell:(id)arg1 didChangeHeight:(double)arg2 keepRectVisible:(CGRect)arg3 inView:(id)arg4;
- (double)_cellFittedHeightWithWidth:(double)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndex:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (id)_cell;
- (id)title;
- (id)initInEditMode:(BOOL)arg1;

@end

