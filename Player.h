#pragma once
#include <Novice.h>
#include "WorldTransform.h"

class Player {
public:
	/// <summary>
	/// �R���X�g���N�^
	/// </summary>
	Player();

	/// <summary>
	/// �f�X�g���N�^
	/// </summary>
	~Player();

	/// <summary>
	/// ������
	/// </summary>
	void Initialize();

	/// <summary>
	/// �X�V����
	/// </summary>
	void Update();

	/// <summary>
	/// �`�揈��
	/// </summary>
	void Draw();

private:
	// ���[���h�g�����X�t�H�[��
	WorldTransform worldTransform_;

};

