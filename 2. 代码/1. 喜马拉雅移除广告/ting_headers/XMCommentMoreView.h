//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIImageView;
@protocol XMCommentMoreViewDelegate;

@interface XMCommentMoreView : UIView
{
    _Bool _isShowShareItem;
    unsigned long long _scene;
    id <XMCommentMoreViewDelegate> _delegate;
    UIImageView *_backView;
    UIView *_bottomView;
    NSArray *_titles;
    NSArray *_images;
    NSArray *_actions;
}

@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
@property(retain, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIImageView *backView; // @synthesize backView=_backView;
@property(nonatomic) _Bool isShowShareItem; // @synthesize isShowShareItem=_isShowShareItem;
@property(nonatomic) __weak id <XMCommentMoreViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (void).cxx_destruct;
- (void)onReport;
- (void)onDelete;
- (void)onCopy;
- (void)onShare;
- (void)dismiss;
- (void)onSelectItem:(id)arg1;
- (void)show;
- (void)configTitlesAndImagesWithScene;
- (void)custormInit;
- (id)init;

@end

