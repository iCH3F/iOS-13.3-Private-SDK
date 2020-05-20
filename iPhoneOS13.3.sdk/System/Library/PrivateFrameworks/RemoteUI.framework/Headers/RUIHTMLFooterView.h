//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <RemoteUI/RUIWebContainerViewDelegate-Protocol.h>
#import <RemoteUI/RemoteUITableFooter-Protocol.h>

@class NSURL, RUIWebContainerView;
@protocol RUITableFooterDelegate;

@interface RUIHTMLFooterView : UIView <RUIWebContainerViewDelegate, RemoteUITableFooter>
{
    RUIWebContainerView *_webContainerView;
    id <RUITableFooterDelegate> _delegate;
    NSURL *_baseURL;
}

@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(nonatomic) __weak id <RUITableFooterDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)webContainerView:(id)arg1 didClickLinkWithURL:(id)arg2;
- (double)footerHeightForWidth:(double)arg1 inView:(id)arg2;
- (double)footerHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setText:(id)arg1 attributes:(id)arg2;
- (id)initWithAttributes:(id)arg1;

@end

