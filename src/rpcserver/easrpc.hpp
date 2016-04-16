#ifndef EASRPC_H
#define EASRPC_H

#include <cstdint>
#include <string>

class EasRpc	{
public:	
	explicit EasRpc();
	~EasRpc();

	bool	eas_writeBanOfTimestamps(int32_t idHost, bool id);
	bool	eas_writeRegisterOfMasks(int idHost);
	bool	eas_writeHardReset(int idMaster);
	bool	eas_writePermissionOfMasters(int idMaster, bool isOpen);
	bool	eas_writeControlDma(int idHost, bool	isOn);
	bool	eas_writeStartTaskMaster(int idMaster);
	bool	eas_writeRegisterOfReadData(int idHost);

protected:

private:

};

#endif//EASRPC_H

//	bool	eas_writeBanOfTimestamps(int idHost, bool	isBan);		//Запрет временных меток
//	bool	eas_writeRegisterOfMasks(int idHost);					//Deprecated
//	bool	eas_writeHardReset(int idMaster);						//Сброс мастера
//	bool	eas_writePermissionOfMasters(int idMaster, bool isOpen);//!! Разрешение работы с хостом
//	bool	eas_writeControlDma(int idHost, bool	isOn);			//!! Управление DMA
//	bool	eas_writeStartTaskMaster(int idMaster);					//Ручное считывание с мастера
//	bool	eas_writeRegisterOfReadData(int idHost);				//!! Разрешить чтение
//	bool	eas_writePermissionOfData(int idMaster);				//!! Разрешить работу с мастером
//	bool	eas_writeClearDataBuffer(int idHost);					//
//	bool	eas_writeResetRegister(int idMaster);					//!! Сбросить всё
//	bool	eas_writePermissionOfTimer(int idMaster);				// Включить таймер
//	bool	eas_writeSetCoincidence(int idMaster, int coincidence);	//!! Количество совпадений
//	bool	eas_writeResetCounter(int idMaster);					//Сбросить счётчик
//	bool	eas_writeSetTimeGate(int idMaster, int ns);				//!! Временные врата
//	bool	eas_writeActiveChannels(int idPaa, bool isOn);			//!! Включить плату
//	bool	eas_writeControlTrigger(int idMaster, int mode);		//Мастер
//	bool	eas_writeProgramTrigger(int idMaster);					//Программный триггер
//	bool	eas_writeResetVme(int idMaster);						//Сбросить шину мастера
//	bool	eas_writeTime(int idMaster, int hours, int min, int sec, int ms);	//Время
//	bool	eas_writeControlRegister(int idPaa);					//!! Сбрость контрольный регстр
//	bool	eas_writeThreshold(int idPaa, int threshold);			//!! Записать пороги
//	bool	eas_writeDelay(int idPaa, int channel, int delay);		//Задержка. Каналы 0 или 1
//	bool	eas_writeResetChannel(inr idPaa, int channel);			//Сбросить канал
//	bool	eas_writeSmoothing(int idPaa, int smoothing);			//Сглаживание

//	bool	eas_test(int idAny);									//true-удачно
//	bool	eas_hardResetAll();										//
//	bool	eas_permissionOfAllMasters();							//
//	bool	eas_activeChannelsAll();								//
//	bool	eas_connectToHost(int idHost, string ip);				//Коннект к Хосту
//	bool	eas_disconnectFromHost(int idHost);						//
//	string	eas_getConfigFile();									//
//	bool	eas_setDefaultSettings();								//
