//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary, NSError, NSString, TVDocumentViewController, TVViewElement;

@protocol TVDocumentViewControllerDelegate <NSObject>

@optional
- (BOOL)documentViewController:(TVDocumentViewController *)arg1 handleEvent:(NSString *)arg2 withElement:(TVViewElement *)arg3;
- (void)documentViewController:(TVDocumentViewController *)arg1 didFailUpdateWithError:(NSError *)arg2;
- (void)documentViewController:(TVDocumentViewController *)arg1 didUpdateWithContext:(NSDictionary *)arg2;
- (void)documentViewControllerDidUpdate:(TVDocumentViewController *)arg1;
- (void)documentViewControllerWillUpdate:(TVDocumentViewController *)arg1;
@end

