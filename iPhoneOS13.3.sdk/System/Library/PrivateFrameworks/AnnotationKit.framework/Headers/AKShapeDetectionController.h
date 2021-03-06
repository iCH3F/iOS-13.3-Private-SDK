//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AKAnnotation, AKCandidatePickerView_iOS, AKController, AKPageModelController, CHDrawing, CHRecognizer, NSMutableArray, NSMutableDictionary;
@protocol AKShapeDetectionControllerDelegate;

@interface AKShapeDetectionController : NSObject
{
    BOOL _preferDoodle;
    BOOL _coalescesDoodles;
    BOOL _shapeDetectionEnabled;
    BOOL _isPreviousCandidateAnnotationUndecided;
    id <AKShapeDetectionControllerDelegate> _delegate;
    AKController *_controller;
    AKAnnotation *_candidateAnnotation;
    CHRecognizer *_shapeRecognizer;
    AKPageModelController *_modelControllerToObserveForAnnotationsAndSelections;
    CHDrawing *_lastDrawing;
    double _veryHighConfidenceLevel;
    CHDrawing *_candidateDrawing;
    NSMutableArray *_candidateAKTags;
    NSMutableDictionary *_candidateAKTagsToAnnotationInfoMap;
    AKCandidatePickerView_iOS *_candidatePickerView;
}

+ (void)logAllResults:(id)arg1;
+ (BOOL)drawingIsValidForRecognition:(id)arg1 withPath:(CGPath )arg2;
@property(retain, nonatomic) AKCandidatePickerView_iOS *candidatePickerView; // @synthesize candidatePickerView=_candidatePickerView;
@property(retain, nonatomic) NSMutableDictionary *candidateAKTagsToAnnotationInfoMap; // @synthesize candidateAKTagsToAnnotationInfoMap=_candidateAKTagsToAnnotationInfoMap;
@property(retain, nonatomic) NSMutableArray *candidateAKTags; // @synthesize candidateAKTags=_candidateAKTags;
@property(retain, nonatomic) CHDrawing *candidateDrawing; // @synthesize candidateDrawing=_candidateDrawing;
@property double veryHighConfidenceLevel; // @synthesize veryHighConfidenceLevel=_veryHighConfidenceLevel;
@property(retain, nonatomic) CHDrawing *lastDrawing; // @synthesize lastDrawing=_lastDrawing;
@property(retain, nonatomic) AKPageModelController *modelControllerToObserveForAnnotationsAndSelections; // @synthesize modelControllerToObserveForAnnotationsAndSelections=_modelControllerToObserveForAnnotationsAndSelections;
@property BOOL isPreviousCandidateAnnotationUndecided; // @synthesize isPreviousCandidateAnnotationUndecided=_isPreviousCandidateAnnotationUndecided;
@property(nonatomic, getter=shapeDetectionEnabled) BOOL shapeDetectionEnabled; // @synthesize shapeDetectionEnabled=_shapeDetectionEnabled;
@property(nonatomic) BOOL coalescesDoodles; // @synthesize coalescesDoodles=_coalescesDoodles;
@property(nonatomic) BOOL preferDoodle; // @synthesize preferDoodle=_preferDoodle;
@property(retain, nonatomic) CHRecognizer *shapeRecognizer; // @synthesize shapeRecognizer=_shapeRecognizer;
@property(nonatomic) __weak AKAnnotation *candidateAnnotation; // @synthesize candidateAnnotation=_candidateAnnotation;
@property(nonatomic) __weak AKController *controller; // @synthesize controller=_controller;
@property(nonatomic) __weak id <AKShapeDetectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)logLastDrawingToDisk;
- (id)convertDrawingBoundsInInputView:(CGRect)arg1 outBoundsInPageModel:(CGRect )arg2;
- (id)createInkResultFromInkDrawing:(id)arg1 annotation:(id)arg2;
- (id)_createDoodleShapeResultWithPath:(CGPath )arg1 withDrawingCenter:(CGPoint)arg2 pathIsPrestroked:(BOOL)arg3;
- (id)_createFlippedCHDrawingFromCHDrawing:(id)arg1 withDrawingCenter:(CGPoint)arg2;
- (id)_createAnnotationWithRecognizerResult:(id)arg1 forDrawingBoundsInInputView:(CGRect)arg2 shouldGoToPageController:(id )arg3;
- (BOOL)_isResultVeryHighConfidence:(id)arg1;
- (void)_performRecognitionOnDrawing:(id)arg1 withInkDrawing:(id)arg2 orWithDoodlePath:(CGPath )arg3 boundsInInputView:(CGRect)arg4 center:(CGPoint)arg5 isPrestroked:(BOOL)arg6 optionalAnnotation:(id)arg7;
- (void)performRecognitionOnDrawing:(id)arg1 withPath:(CGPath )arg2 boundsInInputView:(CGRect)arg3 center:(CGPoint)arg4 isPrestroked:(BOOL)arg5;
- (void)performRecognitionOnDrawing:(id)arg1 withDrawing:(id)arg2 annotation:(id)arg3 boundsInInputView:(CGRect)arg4 center:(CGPoint)arg5;
- (void)_pickCandidateResultWithAnnotationType:(long long)arg1;
- (void)_pickCandidateResult:(id)arg1;
- (void)_teardownCandidatePickerBar;
- (long long)_matchingBlurEffectStyleForCurrentTintColor:(id)arg1;
- (void)_presentCandidatePickerBarWithCandidates:(id)arg1 ofDrawing:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (long long)_toolTagForCHRecognitionResult:(id)arg1;
- (void)_teardownCandidatePicker;
- (void)_showCandidatePickerWithTypes:(id)arg1 forDrawingInInputView:(id)arg2 shouldSurfaceDoodle:(BOOL)arg3;
- (void)clearPreviousCandidateAnnotation;
- (void)dismissCandidatePicker;
- (void)_shouldDismissNotification:(id)arg1;
- (void)reset;
@property(readonly, nonatomic) BOOL isShowingCandidatePicker;
- (void)dealloc;
- (id)initWithController:(id)arg1;

@end

