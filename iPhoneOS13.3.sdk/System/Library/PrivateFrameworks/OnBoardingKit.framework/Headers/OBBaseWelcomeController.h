//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@interface OBBaseWelcomeController : UIViewController
{
    NSUInteger _templateType;
}

@property(nonatomic) NSUInteger templateType; // @synthesize templateType=_templateType;
- (void)_presentationStyleValidationCheck;
- (void)_applyChromelessToBar:(long long)arg1 navigationItem:(id)arg2;
- (id)navigationItem;
- (double)autoScrollEdgeTransitionDistance;
- (long long)navigationBarScrollToEdgeBehavior;
- (NSDirectionalEdgeInsets)insetsForTemplateType:(NSUInteger)arg1;
- (NSDirectionalEdgeInsets)directionalLayoutMargins;
- (void)updateDirectionalLayoutMargins;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;

@end

