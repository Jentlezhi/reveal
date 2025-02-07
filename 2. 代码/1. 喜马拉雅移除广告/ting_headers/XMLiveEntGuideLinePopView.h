//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface XMLiveEntGuideLinePopView : UIView
{
    long long _axisType;
    NSString *_content;
    NSString *_bgImageName;
    double _hideAfterDelay;
    UIImageView *_popContentView;
    UILabel *_textContentLabel;
    XMLiveEntGuideLinePopView *_nextPop;
    UIView *_attachView;
    CDUnknownBlockType _completionBlock;
    struct CGPoint _anchorPoint;
    struct UIEdgeInsets _bgImageInsets;
    struct UIEdgeInsets _textInsets;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) __weak UIView *attachView; // @synthesize attachView=_attachView;
@property(retain, nonatomic) XMLiveEntGuideLinePopView *nextPop; // @synthesize nextPop=_nextPop;
@property(retain, nonatomic) UILabel *textContentLabel; // @synthesize textContentLabel=_textContentLabel;
@property(retain, nonatomic) UIImageView *popContentView; // @synthesize popContentView=_popContentView;
@property(nonatomic) struct UIEdgeInsets textInsets; // @synthesize textInsets=_textInsets;
@property(nonatomic) struct UIEdgeInsets bgImageInsets; // @synthesize bgImageInsets=_bgImageInsets;
@property(nonatomic) double hideAfterDelay; // @synthesize hideAfterDelay=_hideAfterDelay;
@property(copy, nonatomic) NSString *bgImageName; // @synthesize bgImageName=_bgImageName;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) struct CGPoint anchorPoint; // @synthesize anchorPoint=_anchorPoint;
@property(nonatomic) long long axisType; // @synthesize axisType=_axisType;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;
- (void)addActionLine:(id)arg1;
- (void)dismiss;
- (void)showOnView:(id)arg1;
- (void)onTap:(id)arg1;
- (void)layoutGuideView;
- (void)baseInit;
- (id)init;

@end

