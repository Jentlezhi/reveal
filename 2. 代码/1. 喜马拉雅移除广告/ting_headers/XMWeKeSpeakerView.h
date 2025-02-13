//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImage, UILabel, XMWeKeLesson;

@interface XMWeKeSpeakerView : UIView
{
    UIImage *_followImage;
    UIImage *_unfollowImage;
    XMWeKeLesson *_lesson;
    UIButton *_headButton;
    UILabel *_nameLabel;
    UIButton *_followButton;
    UILabel *_stateLabel;
}

@property(retain, nonatomic) UILabel *stateLabel; // @synthesize stateLabel=_stateLabel;
@property(retain, nonatomic) UIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIButton *headButton; // @synthesize headButton=_headButton;
@property(retain, nonatomic) XMWeKeLesson *lesson; // @synthesize lesson=_lesson;
- (void).cxx_destruct;
- (void)clickHeadButton:(id)arg1;
- (void)clickFollowButton:(id)arg1;
- (void)updateSpeakerState:(_Bool)arg1;
- (void)updateFollowState:(_Bool)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

