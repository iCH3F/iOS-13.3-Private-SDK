//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/MFMailComposeViewControllerDelegate-Protocol.h>

@class NSDictionary, UITextView;

@interface PXSettingsHighlightEstimatesExportViewController : UIViewController <MFMailComposeViewControllerDelegate>
{
    BOOL _exportHighlightEstimatesOnViewDidAppear;
    UITextView *_textView;
    NSDictionary *_highlightEstimatesDictionary;
}

@property(retain) NSDictionary *highlightEstimatesDictionary; // @synthesize highlightEstimatesDictionary=_highlightEstimatesDictionary;
@property(retain) UITextView *textView; // @synthesize textView=_textView;
@property BOOL exportHighlightEstimatesOnViewDidAppear; // @synthesize exportHighlightEstimatesOnViewDidAppear=_exportHighlightEstimatesOnViewDidAppear;
// - (void).cxx_destruct;
- (void)_sendEmail:(id)arg1;
- (void)_fetchHighlightEstimatesDictionary;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;

@end

