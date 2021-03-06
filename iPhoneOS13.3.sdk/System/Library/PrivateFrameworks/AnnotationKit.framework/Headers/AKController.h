//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AKActionController, AKAttributeController, AKFormFeatureDetectorController, AKHighlightAnnotationController, AKLegacyDoodleController, AKMainEventHandler, AKModelController, AKPageController, AKPeripheralAvailabilityManager_iOS, AKSidecarController, AKSignatureModelController, AKSparseMutableControllerArray, AKStatistics, AKTextEditorController, AKToolController, AKToolbarView, AKToolbarViewController, AKUndoController, NSMapTable, NSString, UIView;
@protocol AKControllerDelegateProtocol, PKRulerHostingDelegate;

@interface AKController : NSObject
{
    BOOL _isUsedOnDarkBackground;
    BOOL overlayShouldPixelate;
    BOOL _isTornDown;
    BOOL _allEditingDisabled;
    BOOL _annotationEditingEnabled;
    BOOL _pencilAlwaysDraws;
    BOOL _isTestingInstance;
    BOOL _showingMenu;
    BOOL _hideAllAdornments;
    BOOL _isLogging;
    BOOL _selectNewlyCreatedAnnotations;
    BOOL _shapeDetectionEnabled;
    BOOL _useHighVisibilityDefaultInks;
    BOOL __isInDFRAction;
    id <AKControllerDelegateProtocol> _delegate;
    AKModelController *_modelController;
    UIView *_toolbarView;
    NSUInteger _currentPageIndex;
    id <PKRulerHostingDelegate> _rulerHostingDelegate;
    NSString *_author;
    AKSparseMutableControllerArray *_pageControllers;
    NSMapTable *_pageModelControllersToPageControllers;
    AKActionController *_actionController;
    AKToolController *_toolController;
    AKToolbarViewController *_toolbarViewController;
    AKAttributeController *_attributeController;
    AKUndoController *_undoController;
    AKSidecarController *_sidecarController;
    AKMainEventHandler *_mainEventHandler;
    AKTextEditorController *_textEditorController;
    AKLegacyDoodleController *_legacyDoodleController;
    AKSignatureModelController *_signatureModelController;
    AKFormFeatureDetectorController *_formDetectionController;
    AKHighlightAnnotationController *_highlightAnnotationController;
    AKStatistics *_statisticsLogger;
    AKPeripheralAvailabilityManager_iOS *_peripheralAvailabilityManager;
    NSUInteger _pasteCascadingMultiplier;
    long long _lastPasteboardChangeCount;
    NSUInteger _creationCascadingMultiplier;
    AKPageController *_lastCreationCascadingPageController;
    double _akModelToCanvasFixedPixelScaleOfFirstEncounteredPage;
    double _screenPixelsToCanvasPixelsDownscale;
    AKToolbarView *_modernToolbarView;
}

+ (id)colorForHighlightAttributeWithTag:(long long)arg1;
+ (void)adjustAnnotationBoundsToFitText:(id)arg1;
+ (void)renderAnnotation:(id)arg1 inContext:(CGContext )arg2;
+ (id)markupBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2;
+ (BOOL)_isInLowMemoryEnvironment;
+ (BOOL)hasPressureCapableHardware;
+ (BOOL)canConnectToStylus;
+ (id)akBundleIdentifier;
+ (id)akBundle;
+ (id)controllerWithDelegate:(id)arg1;
@property(readonly) BOOL _isInDFRAction; // @synthesize _isInDFRAction=__isInDFRAction;
@property(nonatomic) BOOL useHighVisibilityDefaultInks; // @synthesize useHighVisibilityDefaultInks=_useHighVisibilityDefaultInks;
@property(nonatomic) __weak AKToolbarView *modernToolbarView; // @synthesize modernToolbarView=_modernToolbarView;
@property(nonatomic) BOOL shapeDetectionEnabled; // @synthesize shapeDetectionEnabled=_shapeDetectionEnabled;
@property(nonatomic) BOOL selectNewlyCreatedAnnotations; // @synthesize selectNewlyCreatedAnnotations=_selectNewlyCreatedAnnotations;
@property(nonatomic) BOOL isLogging; // @synthesize isLogging=_isLogging;
@property double screenPixelsToCanvasPixelsDownscale; // @synthesize screenPixelsToCanvasPixelsDownscale=_screenPixelsToCanvasPixelsDownscale;
@property double akModelToCanvasFixedPixelScaleOfFirstEncounteredPage; // @synthesize akModelToCanvasFixedPixelScaleOfFirstEncounteredPage=_akModelToCanvasFixedPixelScaleOfFirstEncounteredPage;
@property(nonatomic) BOOL hideAllAdornments; // @synthesize hideAllAdornments=_hideAllAdornments;
@property __weak AKPageController *lastCreationCascadingPageController; // @synthesize lastCreationCascadingPageController=_lastCreationCascadingPageController;
@property NSUInteger creationCascadingMultiplier; // @synthesize creationCascadingMultiplier=_creationCascadingMultiplier;
@property long long lastPasteboardChangeCount; // @synthesize lastPasteboardChangeCount=_lastPasteboardChangeCount;
@property NSUInteger pasteCascadingMultiplier; // @synthesize pasteCascadingMultiplier=_pasteCascadingMultiplier;
@property(getter=isShowingMenu) BOOL showingMenu; // @synthesize showingMenu=_showingMenu;
@property(retain) AKPeripheralAvailabilityManager_iOS *peripheralAvailabilityManager; // @synthesize peripheralAvailabilityManager=_peripheralAvailabilityManager;
@property(retain) AKStatistics *statisticsLogger; // @synthesize statisticsLogger=_statisticsLogger;
@property(retain) AKHighlightAnnotationController *highlightAnnotationController; // @synthesize highlightAnnotationController=_highlightAnnotationController;
@property(retain) AKFormFeatureDetectorController *formDetectionController; // @synthesize formDetectionController=_formDetectionController;
@property(retain) AKSignatureModelController *signatureModelController; // @synthesize signatureModelController=_signatureModelController;
@property(retain) AKLegacyDoodleController *legacyDoodleController; // @synthesize legacyDoodleController=_legacyDoodleController;
@property(retain) AKTextEditorController *textEditorController; // @synthesize textEditorController=_textEditorController;
@property(retain) AKMainEventHandler *mainEventHandler; // @synthesize mainEventHandler=_mainEventHandler;
@property(retain) AKSidecarController *sidecarController; // @synthesize sidecarController=_sidecarController;
@property(retain) AKUndoController *undoController; // @synthesize undoController=_undoController;
@property(retain) AKAttributeController *attributeController; // @synthesize attributeController=_attributeController;
@property(retain) AKToolbarViewController *toolbarViewController; // @synthesize toolbarViewController=_toolbarViewController;
@property(retain) AKToolController *toolController; // @synthesize toolController=_toolController;
@property(retain) AKActionController *actionController; // @synthesize actionController=_actionController;
@property(retain) NSMapTable *pageModelControllersToPageControllers; // @synthesize pageModelControllersToPageControllers=_pageModelControllersToPageControllers;
@property(retain) AKSparseMutableControllerArray *pageControllers; // @synthesize pageControllers=_pageControllers;
@property BOOL isTestingInstance; // @synthesize isTestingInstance=_isTestingInstance;
@property(copy) NSString *author; // @synthesize author=_author;
@property(nonatomic) __weak id <PKRulerHostingDelegate> rulerHostingDelegate; // @synthesize rulerHostingDelegate=_rulerHostingDelegate;
@property NSUInteger currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(nonatomic) BOOL pencilAlwaysDraws; // @synthesize pencilAlwaysDraws=_pencilAlwaysDraws;
@property(nonatomic) BOOL annotationEditingEnabled; // @synthesize annotationEditingEnabled=_annotationEditingEnabled;
@property(nonatomic) BOOL allEditingDisabled; // @synthesize allEditingDisabled=_allEditingDisabled;
@property(retain) UIView *toolbarView; // @synthesize toolbarView=_toolbarView;
@property(retain) AKModelController *modelController; // @synthesize modelController=_modelController;
@property __weak id <AKControllerDelegateProtocol> delegate; // @synthesize delegate=_delegate;
@property BOOL isTornDown; // @synthesize isTornDown=_isTornDown;
@property(nonatomic) BOOL overlayShouldPixelate; // @synthesize overlayShouldPixelate;
@property(nonatomic) BOOL isUsedOnDarkBackground; // @synthesize isUsedOnDarkBackground=_isUsedOnDarkBackground;
// - (void).cxx_destruct;
- (void)endLogging;
- (void)beginLogging:(id)arg1 documentType:(id)arg2;
- (void)strokeAddedNotification:(id)arg1;
- (void)_pageModelControllerSelectedAnnotationsChangedNotification:(id)arg1;
- (BOOL)isPresentingPopover;
- (CGRect)_popoverAnchorFrameInModelForAnnotations:(id)arg1;
- (id)pageControllerForAnnotation:(id)arg1;
- (id)pageControllerForPageModelController:(id)arg1;
- (id)currentPageController;
- (id)_toolpicker_inkIdentifier;
- (void)_toolpicker_setInkIdentifier:(id)arg1;
- (id)_toolpicker_color;
- (void)_toolpicker_setColor:(id)arg1;
- (BOOL)supportForPencilAlwaysDrawsSatisfied;
- (BOOL)shouldDrawVariableStrokeDoodles;
- (BOOL)_validateCutCopyDelete;
- (void)_didReceiveMemoryWarning:(id)arg1;
@property(readonly, nonatomic) BOOL onlyDrawWithApplePencil;
- (void)removeNoteFromAnnotation:(id)arg1;
- (void)addPopupToAnnotation:(id)arg1 openPopup:(BOOL)arg2;
- (void)highlightableSelectionDidEndChanging;
- (void)highlightableSelectionWillBeginChanging;
- (void)highlightableSelectionChanged;
- (void)willHideMenu:(id)arg1;
- (void)willShowMenu:(id)arg1;
- (void)hideSelectionMenu:(id)arg1;
- (void)showSelectionMenu:(id)arg1;
- (BOOL)canBeginEditingTextAnnotation:(id)arg1;
- (BOOL)validateEditTextAnnotation:(id)arg1;
- (void)editTextAnnotation:(id)arg1;
- (BOOL)validateShowAttributeInspector:(id)arg1;
- (void)showAttributeInspector:(id)arg1;
- (BOOL)validateSelectAll:(id)arg1;
- (void)selectAll:(id)arg1;
- (BOOL)validateDuplicate:(id)arg1;
- (void)duplicate:(id)arg1;
- (BOOL)validateDelete:(id)arg1;
- (void)delete:(id)arg1;
- (BOOL)validatePaste:(id)arg1;
- (void)paste:(id)arg1;
- (BOOL)validateCopy:(id)arg1;
- (void)copy:(id)arg1;
- (BOOL)validateCut:(id)arg1;
- (void)cut:(id)arg1;
- (BOOL)validateRedo:(id)arg1;
- (void)redo:(id)arg1;
- (BOOL)validateUndo:(id)arg1;
- (void)undo:(id)arg1;
- (void)delayedUndoControllerSetup;
- (void)clearUndoStack;
- (void)applyCurrentCrop;
- (void)resetToDefaultToolMode;
- (void)setToolMode:(NSUInteger)arg1;
- (NSUInteger)toolMode;
- (id)imageForToolbarButtonItemOfType:(NSUInteger)arg1;
- (id)toolbarButtonItemOfType:(NSUInteger)arg1;
- (void)_updateGestureDependencyPriority;
- (id)rotationGestureRecognizer;
- (id)panGestureRecognizer;
- (id)pressGestureRecognizer;
- (id)doubleTapGestureRecognizer;
- (id)tapGestureRecognizer;
- (BOOL)handleEvent:(id)arg1;
- (CGRect)contentAlignedRectForRect:(CGRect)arg1 onPageAtIndex:(NSUInteger)arg2;
- (double)currentModelBaseScaleFactorForPageAtIndex:(NSUInteger)arg1;
- (long long)currentExifOrientationForPageAtIndex:(NSUInteger)arg1;
- (void)reloadVisibleToolbarItemIdentifiers;
- (void)commitEditing;
- (void)renderAnnotation:(id)arg1 inContext:(CGContext )arg2;
- (void)updateOverlayViewAtIndex:(NSUInteger)arg1;
- (void)relinquishOverlayAtIndex:(NSUInteger)arg1;
- (void)prepareOverlayAtIndex:(NSUInteger)arg1;
- (BOOL)isOverlayViewLoadedAtIndex:(NSUInteger)arg1;
- (id)overlayViewAtIndex:(NSUInteger)arg1;
- (void)performActionForSender:(id)arg1;
- (BOOL)validateSender:(id)arg1;
- (void)enclosingScrollViewDidScroll:(id)arg1;
- (void)_setupPageModelController:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)dealloc;
- (void)teardown;
- (id)initForTesting;
- (id)initWithDelegate:(id)arg1;

@end

