//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, UIImageView;

@interface YXLiveAudienceListFirstView : UIView
{
    _Bool _advanceStyle;
    CDUnknownBlockType _didIconBlock;
    UIImageView *_avatorView;
    NSDictionary *_firstViewInfo;
}

@property(retain, nonatomic) NSDictionary *firstViewInfo; // @synthesize firstViewInfo=_firstViewInfo;
@property(retain, nonatomic) UIImageView *avatorView; // @synthesize avatorView=_avatorView;
@property(nonatomic) _Bool advanceStyle; // @synthesize advanceStyle=_advanceStyle;
@property(copy, nonatomic) CDUnknownBlockType didIconBlock; // @synthesize didIconBlock=_didIconBlock;
- (void).cxx_destruct;
- (void)updateAvataBgView;
- (void)isAvatorAndBgViewHidden:(_Bool)arg1;
- (void)showDefault;
- (void)deletetFirstMemberid:(id)arg1;
- (void)showFirstViewWithInfo:(id)arg1;
- (void)tapViewDid:(id)arg1;
- (void)setupView;
- (id)init;

@end

