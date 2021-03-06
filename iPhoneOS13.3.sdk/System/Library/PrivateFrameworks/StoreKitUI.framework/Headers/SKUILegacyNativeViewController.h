//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/SKUICategoryControllerDelegate-Protocol.h>

@class NSData, NSURL, SKUICategoryController, SKUIStorePageViewController, SSVLoadURLOperation;

__attribute__((visibility("hidden")))
@interface SKUILegacyNativeViewController : SKUIViewController <SKUICategoryControllerDelegate>
{
    NSURL *_activeURL;
    SKUICategoryController *_categoryController;
    NSURL *_defaultURL;
    NSData *_initialData;
    SSVLoadURLOperation *_initialOperation;
    SKUIStorePageViewController *_storePageViewController;
}

// - (void).cxx_destruct;
- (id)_storePageViewController;
- (void)_reloadNavigationItem;
- (void)_finishLoadWithResult:(BOOL)arg1 error:(id)arg2;
- (id)_categoryController;
- (id)activeMetricsController;
- (void)categoryController:(id)arg1 didSelectCategory:(id)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)reloadData;
- (void)dealloc;
- (id)initWithData:(id)arg1 fromOperation:(id)arg2;

@end

