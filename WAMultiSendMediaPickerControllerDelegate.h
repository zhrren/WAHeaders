/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol WAMultiSendMediaPickerControllerDelegate <NSObject>
-(void)multiSendMediaPickerController:(id)controller didSelectVideoAtURL:(id)url referenceURL:(id)url3 caption:(id)caption;
-(void)multiSendMediaPickerControllerDidRequestRetakePhoto:(id)multiSendMediaPickerController;
-(void)multiSendMediaPickerControllerDidCancel:(id)multiSendMediaPickerController;
-(void)multiSendMediaPickerController:(id)controller didSaveVideoToURL:(id)url caption:(id)caption;
-(void)multiSendMediaPickerController:(id)controller didSelectItems:(id)items;
@end
