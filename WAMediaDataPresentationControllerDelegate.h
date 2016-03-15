/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol WAMediaDataPresentationControllerDelegate <NSObject>
-(void)mediaDataPresentationControllerDidLayoutView:(id)mediaDataPresentationController;
-(void)mediaDataPresentationController:(id)controller didLongPressMediaAtIndex:(unsigned)index;
-(void)mediaDataPresentationController:(id)controller didTapMediaAtIndex:(unsigned)index;
-(void)mediaDataPresentationControllerContentsDidFinishLoadingMedia:(id)mediaDataPresentationControllerContents;
-(void)mediaDataPresentationController:(id)controller contentsDidChangeWithAnimation:(BOOL)contents;
@end
